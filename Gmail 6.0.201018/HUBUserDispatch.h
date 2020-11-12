//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBBaseDispatch.h"

@protocol HUBDispatch;

@interface HUBUserDispatch : HUBBaseDispatch
{
    unsigned long long _user;
    id <HUBDispatch> _targetDispatch;
}

+ (id)withUser:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <HUBDispatch> targetDispatch; // @synthesize targetDispatch=_targetDispatch;
@property(readonly, nonatomic) unsigned long long user; // @synthesize user=_user;
- (id)createQueueWithLabel:(id)arg1 attr:(id)arg2 targetQueue:(id)arg3;
- (id)createQueueWithLabel:(id)arg1 attr:(id)arg2;
- (id)globalQueueWithIdentifier:(long long)arg1 flags:(unsigned long long)arg2;
- (id)mainQueue;
- (id)initWithUser:(unsigned long long)arg1 targetDispatch:(id)arg2;

@end
