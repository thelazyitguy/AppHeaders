//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTHubInteractionLogger, SPTLocalSettings, SPTPlayer, SPTUBIHubsUtilities;

@interface SPTHomeCommandHandlerFactory : NSObject
{
    NSString *_username;
    id <SPTPlayer> _player;
    id <SPTHubInteractionLogger> _hubInteractionLogger;
    id <SPTLocalSettings> _localSettings;
    id <SPTUBIHubsUtilities> _ubiHubsUtilities;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTUBIHubsUtilities> ubiHubsUtilities; // @synthesize ubiHubsUtilities=_ubiHubsUtilities;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTHubInteractionLogger> hubInteractionLogger; // @synthesize hubInteractionLogger=_hubInteractionLogger;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)provideTooltipDismissalCommandHandlerWithViewModelProvider:(id)arg1;
- (id)providePlayTrailerCommandHandler:(id)arg1;
- (id)providePlayThenPauseCommandHandler:(id)arg1;
- (id)provideTasteOnboardingSkipCommandHandlerWithOverrides:(id)arg1;
- (id)provideReloadCommandHandlerWithViewModelProvider:(id)arg1;
- (id)initWithUsername:(id)arg1 player:(id)arg2 hubInteractionLogger:(id)arg3 localSettings:(id)arg4 ubiHubsUtilities:(id)arg5;

@end
