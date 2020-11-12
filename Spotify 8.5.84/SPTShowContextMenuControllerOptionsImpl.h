//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShowContextMenuControllerOptions-Protocol.h"

@class NSString;

@interface SPTShowContextMenuControllerOptionsImpl : NSObject <SPTShowContextMenuControllerOptions>
{
    _Bool _showClosedCaptionsMenu;
    _Bool _showSleepTimer;
    _Bool _showMarkedAsPlayedUnplayed;
    double _currentEpisodeTimestamp;
}

@property(nonatomic) _Bool showMarkedAsPlayedUnplayed; // @synthesize showMarkedAsPlayedUnplayed=_showMarkedAsPlayedUnplayed;
@property(nonatomic) double currentEpisodeTimestamp; // @synthesize currentEpisodeTimestamp=_currentEpisodeTimestamp;
@property(nonatomic) _Bool showSleepTimer; // @synthesize showSleepTimer=_showSleepTimer;
@property(nonatomic) _Bool showClosedCaptionsMenu; // @synthesize showClosedCaptionsMenu=_showClosedCaptionsMenu;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
