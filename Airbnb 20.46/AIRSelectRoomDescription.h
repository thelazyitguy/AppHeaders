//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSArray;

@interface AIRSelectRoomDescription : AIRModel
{
    NSArray *_layoutTypes;
    NSArray *_roomTypes;
}

+ (id)customTransformers;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *roomTypes; // @synthesize roomTypes=_roomTypes;
@property(readonly, copy, nonatomic) NSArray *layoutTypes; // @synthesize layoutTypes=_layoutTypes;

@end

