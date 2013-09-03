//
//  BRPlayfieldLayer.h
//  breaker
//
//  Created by Toan.Quach on 8/27/13.
//  Copyright 2013 Toan.Quach. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

#import "Box2D.h"
#import "PhysicsSprite.h"
#import "BRHUD.h"
#import "BRGameHandler.h"
#import "BRContactListener.h"
#import "SimpleAudioEngine.h"

@interface BRPlayfieldLayer : CCLayer
{
    CGSize size; // window size from CCDirector
    
    CCSpriteBatchNode *bricksheet; // The spritesheet
    
    BRGameHandler *gh; // Singleton class
    BRHUD *hudLayer; // A reference to the HUD layer
    
    ccTime stepTime; // Used in update for time elapsed
    
    NSInteger levelNum; // Current level number
    
    PhysicsSprite *paddle;
    
    BRContactListener *contactListener;
    
    b2World *world;
	b2Body *wallBody;
	b2Fixture *bottomGutter;
    b2Body *paddleBody;
	b2Fixture *paddleFixture;
	b2MouseJoint *mouseJoint;
    
    ccTime paddleTimer;
    BOOL isPaddleDeformed;
    
    NSInteger multiballCounter;
    
    NSDictionary *patternDefs;
    
    CCLabelTTF *levelLabel;
    
    BOOL isGameOver;
    BOOL isBallInPlay;
    BOOL shouldStartMultiball;
}

+(CCScene *) scene;
@end
