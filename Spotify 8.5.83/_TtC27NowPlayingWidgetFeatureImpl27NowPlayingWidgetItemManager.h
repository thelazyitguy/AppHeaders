//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRecentlyPlayedListObserver-Protocol.h"

@interface _TtC27NowPlayingWidgetFeatureImpl27NowPlayingWidgetItemManager : NSObject <SPTRecentlyPlayedListObserver>
{
    // Error parsing type: , name: player
    // Error parsing type: , name: contextFetcher
    // Error parsing type: , name: recentlyPlayedList
    // Error parsing type: , name: properties
    // Error parsing type: , name: currentURI
    // Error parsing type: , name: updateWidgetMainItem
    // Error parsing type: , name: currentWidgetData
}

- (void).cxx_destruct;
- (id)init;
- (void)userWillLogout;
- (void)appWillResignActive;
- (void)recentlyPlayedListDidReload:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)dealloc;

@end

