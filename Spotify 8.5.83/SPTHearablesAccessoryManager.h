//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTAccessoryStateManager;

@interface SPTHearablesAccessoryManager : NSObject
{
    id <SPTAccessoryStateManager> _stateManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTAccessoryStateManager> stateManager; // @synthesize stateManager=_stateManager;
- (void)removeAccessory:(id)arg1;
- (id)addAccessory:(id)arg1;
- (id)initWithStateManager:(id)arg1;

@end
