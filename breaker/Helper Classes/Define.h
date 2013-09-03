//
//  Define.h
//  breaker
//
//  Created by Toan.Quach on 8/28/13.
//  Copyright (c) 2013 Toan.Quach. All rights reserved.
//

#ifndef breaker_Define_h
#define breaker_Define_h

// Box2D ratio
#define PTM_RATIO 32

// Audio definitions
#define SND_BUTTON @"button.caf"
#define SND_PADDLE @"latch2.caf"
#define SND_BRICK @"latch1.caf"
#define SND_LOSEBALL @"crunch.caf"

// Object identification
typedef enum {
    kBall = 1,
    kPaddle,
    kBrick,
    kWall,
    kPowerupExpand,
    kPowerupContract,
    kPowerupMultiball
} kObjectType;

typedef enum {
    kBrickBlank = 0,
    kBrickBlue,
    kBrickCyan,
    kBrickGreen,
    kBrickGrey,
    kBrickOrange,
    kBrickPurple,
    kBrickRed,
    kBrickYellow
} BrickType;


#endif
