//
//  Creep.h
//  Cocos2D Build a Tower Defense Game
//
//  Created by iPhoneGameTutorials on 4/4/11.
//  Copyright 2011 iPhoneGameTutorial.com All rights reserved.
//

#import "cocos2d.h"
#import "SimpleAudioEngine.h"
#import "DataModel.h"
#import "Creep.h"

@interface Tower : CCSprite {
	int _range;
	
	CCSprite * selSpriteRange;
    Creep * _target;
    
    NSMutableArray *_projectiles;
	CCSprite *_nextProjectile;
}

@property (nonatomic, assign) int range;
@property (nonatomic, retain) Creep * target;
@property (nonatomic, retain) CCSprite * nextProjectile;

- (Creep *)getClosestTarget;

@end

@interface MachineGunTower : Tower {

}

+ (id)tower;
- (void)towerLogic:(ccTime)dt;
- (void)setClosestTarget:(Creep *)closestTarget;
- (void)creepMoveFinished:(id)sender;
- (void)finishFiring;
@end
