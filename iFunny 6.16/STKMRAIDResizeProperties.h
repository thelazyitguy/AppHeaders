//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface STKMRAIDResizeProperties : NSObject
{
    _Bool _allowOffscreen;
    long long _customClosePosition;
    struct CGRect _frame;
}

+ (id)propertiesThatAllowOffScreen:(id)arg1 customClosePosition:(id)arg2 width:(id)arg3 height:(id)arg4 offsetX:(id)arg5 offsetY:(id)arg6;
@property(readonly, nonatomic) long long customClosePosition; // @synthesize customClosePosition=_customClosePosition;
@property(readonly, nonatomic) _Bool allowOffscreen; // @synthesize allowOffscreen=_allowOffscreen;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (id)initWithFrame:(struct CGRect)arg1 allowOffscreen:(_Bool)arg2 customClosePosition:(long long)arg3;

@end
