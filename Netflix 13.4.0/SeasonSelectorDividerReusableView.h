//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "DisplayPageCollectionCell-Protocol.h"

@class AbstractDisplayPageCellViewModel, NFUIIconButton, NFUIVideoDisplayPage, NSIndexPath, NSLayoutConstraint, NSString, UIView;
@protocol SectionDividerDelegateProtocol;

@interface SeasonSelectorDividerReusableView : UICollectionReusableView <DisplayPageCollectionCell>
{
    _Bool _hasMultipleSeasons;
    _Bool _isSupplementary;
    NFUIVideoDisplayPage *_collectionViewController;
    AbstractDisplayPageCellViewModel *_model;
    NFUIIconButton *_seasonButton;
    UIView *_seasonButtonContainer;
    id <SectionDividerDelegateProtocol> _delegate;
    NSLayoutConstraint *_seasonButtonLeadingConstraint;
    NSLayoutConstraint *_seasonButtonTopConstraint;
    NSIndexPath *_indexPath;
    NSString *_identifier;
    NSString *_kind;
    CDUnknownBlockType _pointNotificationCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType pointNotificationCompletion; // @synthesize pointNotificationCompletion=_pointNotificationCompletion;
@property(nonatomic) _Bool isSupplementary; // @synthesize isSupplementary=_isSupplementary;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak NSLayoutConstraint *seasonButtonTopConstraint; // @synthesize seasonButtonTopConstraint=_seasonButtonTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *seasonButtonLeadingConstraint; // @synthesize seasonButtonLeadingConstraint=_seasonButtonLeadingConstraint;
@property(nonatomic) __weak id <SectionDividerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView *seasonButtonContainer; // @synthesize seasonButtonContainer=_seasonButtonContainer;
@property(nonatomic) __weak NFUIIconButton *seasonButton; // @synthesize seasonButton=_seasonButton;
@property(nonatomic) _Bool hasMultipleSeasons; // @synthesize hasMultipleSeasons=_hasMultipleSeasons;
@property(retain, nonatomic) AbstractDisplayPageCellViewModel *model; // @synthesize model=_model;
@property(nonatomic) __weak NFUIVideoDisplayPage *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
- (void)triggerNotificationUnregistration;
- (void)triggerNotificationRegistration;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureDelegate:(id)arg1 withIdentifier:(id)arg2;
- (void)doLayout:(double)arg1;
- (void)configureWithData:(id)arg1 withIndexPath:(id)arg2 isLayoutPass:(_Bool)arg3;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
