//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SPTContextMenuAccessoryButton, SPTTheme;
@protocol SPTNowPlayingAuxiliaryActionsHandler;

@interface SPTNowPlayingContextMenuButtonViewController : UIViewController
{
    id <SPTNowPlayingAuxiliaryActionsHandler> _auxiliaryActionsHandler;
    SPTTheme *_theme;
    SPTContextMenuAccessoryButton *_contextMenuButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTContextMenuAccessoryButton *contextMenuButton; // @synthesize contextMenuButton=_contextMenuButton;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTNowPlayingAuxiliaryActionsHandler> auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
- (void)contextMenuButtonButtonPressed:(id)arg1;
- (void)loadView;
- (id)initWithAuxiliaryActionsHandler:(id)arg1 theme:(id)arg2;

@end

