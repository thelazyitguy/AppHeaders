//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTItemListCardView.h"

#import "GBTMaterialInfoViewButtonBarDelegate-Protocol.h"
#import "GBTSectionExtraView-Protocol.h"

@class NSString;
@protocol GBTSectionExtraViewDelegate;

@interface GBTSwipeActionsOnboardingCardView : GBTItemListCardView <GBTMaterialInfoViewButtonBarDelegate, GBTSectionExtraView>
{
    id <GBTSectionExtraViewDelegate> extraViewDelegate;
}

+ (unsigned long long)sectionExtraViewKey;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GBTSectionExtraViewDelegate> extraViewDelegate; // @synthesize extraViewDelegate;
- (void)setupViews;
- (void)materialInfoViewButtonBar:(id)arg1 didTapButton:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)didMoveToSuperview;
- (id)initForConflictingMigration:(_Bool)arg1 withParentVisualElement:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
