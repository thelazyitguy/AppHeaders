//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@protocol YTMultiAccountDataDelegate <NSObject>

@optional
- (void)accountsListDidChange;
- (void)accountItemStatusDidChangeForAccountAtIndex:(unsigned long long)arg1 previousStatus:(unsigned long long)arg2 newStatus:(unsigned long long)arg3;
@end

