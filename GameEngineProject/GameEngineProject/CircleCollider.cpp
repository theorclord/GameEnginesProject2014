#include "CircleCollider.h"

bool CircleCollider::DetectCollision(Transform trans, Transform parent){
	float dist = std::sqrtf(std::powf(trans.getSprite().getPosition().x - parent.getSprite().getPosition().x, 2) +
		std::powf(trans.getSprite().getPosition().y - parent.getSprite().getPosition().y, 2));
	if (typeid(trans.getCollider())==typeid(CircleCollider)){
		Collider coll = trans.getCollider();
		if (dynamic_cast<CircleCollider&> (coll).getRadius() + CircleCollider::radius <= dist){
			CircleCollider::OnEnter();
		}
	};
	return false;
}