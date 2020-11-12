//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GSCProfileCardView-Protocol.h"
#import "PSTReportingChainCollectionVCDelegate-Protocol.h"

@class GSCProfileConfig, NSArray, NSLayoutConstraint, NSString, PSTReportingChainCollectionViewController;
@protocol GSCProfileCardViewDelegate, GSCProfileCardViewStateDelegate, PSTReportingChainCardDependencies, PSTReportingChainExpansionDelegate;

@interface PSTReportingChainCard : UIView <PSTReportingChainCollectionVCDelegate, GSCProfileCardView>
{
    NSArray *_accessibilityElementsArray;
    PSTReportingChainCollectionViewController *_collectionVC;
    id <PSTReportingChainCardDependencies> _dependencies;
    NSLayoutConstraint *_bottomConstraint;
    GSCProfileConfig *_config;
    id <GSCProfileCardViewDelegate> _delegate;
    id <GSCProfileCardViewStateDelegate> _stateDelegate;
    id <PSTReportingChainExpansionDelegate> _expansionDelegate;
}

+ (double)heightWithData:(id)arg1 sizeState:(unsigned long long)arg2 config:(id)arg3 constrainedToWidth:(double)arg4;
+ (double)heightWithData:(id)arg1 expansionCount:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PSTReportingChainExpansionDelegate> expansionDelegate; // @synthesize expansionDelegate=_expansionDelegate;
@property(nonatomic) __weak id <GSCProfileCardViewStateDelegate> stateDelegate; // @synthesize stateDelegate=_stateDelegate;
@property(nonatomic) __weak id <GSCProfileCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)createViewWithExpansionCount:(long long)arg1;
- (void)userDidTapProfile:(id)arg1 withName:(id)arg2 withPhoto:(id)arg3;
- (void)cardContentDidChangeByHeightDelta:(double)arg1 expansionCount:(long long)arg2 maxCount:(long long)arg3;
- (void)cardContentWillChangeByHeightDelta:(double)arg1;
- (void)setData:(id)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)initWithFrame:(struct CGRect)arg1 expansionCount:(long long)arg2 dependencies:(id)arg3 config:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
