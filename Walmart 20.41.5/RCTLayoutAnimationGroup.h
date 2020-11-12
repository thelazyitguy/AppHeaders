//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RCTLayoutAnimation;

@interface RCTLayoutAnimationGroup : NSObject
{
    RCTLayoutAnimation *_creatingLayoutAnimation;
    RCTLayoutAnimation *_updatingLayoutAnimation;
    RCTLayoutAnimation *_deletingLayoutAnimation;
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) RCTLayoutAnimation *deletingLayoutAnimation; // @synthesize deletingLayoutAnimation=_deletingLayoutAnimation;
@property(readonly, nonatomic) RCTLayoutAnimation *updatingLayoutAnimation; // @synthesize updatingLayoutAnimation=_updatingLayoutAnimation;
@property(readonly, nonatomic) RCTLayoutAnimation *creatingLayoutAnimation; // @synthesize creatingLayoutAnimation=_creatingLayoutAnimation;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithConfig:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithCreatingLayoutAnimation:(id)arg1 updatingLayoutAnimation:(id)arg2 deletingLayoutAnimation:(id)arg3 callback:(CDUnknownBlockType)arg4;

@end
