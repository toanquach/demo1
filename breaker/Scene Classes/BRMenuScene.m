//
//  BRMenuScene.m
//  breaker
//
//  Created by Toan.Quach on 8/28/13.
//  Copyright 2013 Toan.Quach. All rights reserved.
//

#import "BRMenuScene.h"
#import "BRMenuLayer.h"

@implementation BRMenuScene

+(id)scene
{
    CCScene *scene = [CCScene node];
    BRMenuLayer *menu = [BRMenuLayer node];
    
    [scene addChild:menu];
    return scene;
}

@end
