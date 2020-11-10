//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTArtistAboutModerationRegistrar, SPTArtistAboutStateProvider;
@protocol SPTContextMenuActionsProvider, SPTContextMenuOptionsFactory, SPTContextMenuPresenter, SPTContextMenuPresenterFactory, SPTModerationServiceState;

@interface SPTArtistAboutContextMenuViewModel : NSObject
{
    id <SPTContextMenuPresenter> _contextMenuPresenter;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTContextMenuActionsProvider> _actionFactory;
    id <SPTContextMenuOptionsFactory> _contextMenuOptionsFactory;
    id <SPTModerationServiceState> _moderationServiceState;
    SPTArtistAboutStateProvider *_stateProvider;
    SPTArtistAboutModerationRegistrar *_artistAboutModerationRegistrar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTArtistAboutModerationRegistrar *artistAboutModerationRegistrar; // @synthesize artistAboutModerationRegistrar=_artistAboutModerationRegistrar;
@property(retain, nonatomic) SPTArtistAboutStateProvider *stateProvider; // @synthesize stateProvider=_stateProvider;
@property(retain, nonatomic) id <SPTModerationServiceState> moderationServiceState; // @synthesize moderationServiceState=_moderationServiceState;
@property(readonly, nonatomic) id <SPTContextMenuOptionsFactory> contextMenuOptionsFactory; // @synthesize contextMenuOptionsFactory=_contextMenuOptionsFactory;
@property(readonly, nonatomic) id <SPTContextMenuActionsProvider> actionFactory; // @synthesize actionFactory=_actionFactory;
@property(retain, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
- (void)presentContextMenuInViewController:(id)arg1;
- (id)createContextMenuTasks;
- (void)dealloc;
- (id)initWithContextMenuPresenterFactory:(id)arg1 moderationServiceState:(id)arg2 actionFactory:(id)arg3 contextMenuOptionsFactory:(id)arg4 stateProvider:(id)arg5 artistAboutModerationRegistrar:(id)arg6;

@end

