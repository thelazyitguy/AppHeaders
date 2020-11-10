//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "NFUIPlayerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NFUIExtrasFeedCellView, NFUIMiniPlayerViewController, NFUIUpdatesEntity, NFUIUpdatesViewModel, NSString, UIView;
@protocol ViewControllerOverContextDelegateProtocol><NFUIUpdatesTableViewCellDelegate;

@interface NFUIUpdatesTableViewCell : UITableViewCell <UIGestureRecognizerDelegate, NFUIPlayerDelegate>
{
    id <ViewControllerOverContextDelegateProtocol><NFUIUpdatesTableViewCellDelegate> _delegate;
    NFUIMiniPlayerViewController *_miniPlayerViewController;
    NFUIExtrasFeedCellView *_feedCellView;
    UIView *_containerView;
    UIView *_backgroundContentView;
    NFUIUpdatesEntity *_entity;
    NFUIUpdatesViewModel *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NFUIUpdatesViewModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NFUIUpdatesEntity *entity; // @synthesize entity=_entity;
@property(nonatomic) __weak UIView *backgroundContentView; // @synthesize backgroundContentView=_backgroundContentView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NFUIExtrasFeedCellView *feedCellView; // @synthesize feedCellView=_feedCellView;
@property(readonly, nonatomic) NFUIMiniPlayerViewController *miniPlayerViewController; // @synthesize miniPlayerViewController=_miniPlayerViewController;
@property __weak id <ViewControllerOverContextDelegateProtocol><NFUIUpdatesTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setFocusState:(_Bool)arg1;
- (void)performCleanup;
- (void)prepareForReuse;
- (void)stop;
- (void)pause;
- (void)play;
- (id)currentPlayer;
- (void)play:(id)arg1;
- (void)configureWithDataModel:(id)arg1;
- (id)accessibilityIdentifier;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
