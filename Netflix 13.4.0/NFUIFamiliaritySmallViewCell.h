//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIFamiliarityViewCell.h"

#import "NFUICellFactoryItemProtocol-Protocol.h"
#import "NFUIFamiliarityViewCellProtocol-Protocol.h"

@class NFUIFamiliaritySmallViewModel, NSString, UIView;
@protocol NFUIReusableViewProtocol;

@interface NFUIFamiliaritySmallViewCell : NFUIFamiliarityViewCell <NFUIFamiliarityViewCellProtocol, NFUICellFactoryItemProtocol>
{
    _Bool shouldSkipViewModelCreationWhenSizing;
    UIView<NFUIReusableViewProtocol> *wrappedView;
}

+ (id)viewModelForEntityId:(id)arg1;
+ (void)load;
+ (id)reuseIdentifierForModel:(id)arg1;
+ (id)reuseIdentifier;
+ (_Bool)shouldReturnClassForType:(id)arg1 withModel:(id)arg2;
- (void).cxx_destruct;
- (void)setShouldSkipViewModelCreationWhenSizing:(_Bool)arg1;
@property(retain, nonatomic) UIView<NFUIReusableViewProtocol> *wrappedView; // @synthesize wrappedView;
- (void)cellDidEndDisplaying:(id)arg1;
- (void)prepareForReuse;
- (unsigned long long)definitiveItemCount;
- (void)viewRendered;
- (void)playTapped:(id)arg1;
- (id)trackingInfo;
- (void)setIsLayoutPass:(_Bool)arg1;
- (void)reloadViewModel;
@property(retain, nonatomic) NFUIFamiliaritySmallViewModel *viewModel; // @dynamic viewModel;
- (struct CGSize)calculatedSize:(struct CGSize)arg1 withModel:(id)arg2 withCollectionView:(id)arg3;
- (void)doLayout:(struct CGSize)arg1 withCollectionView:(id)arg2;
- (_Bool)shouldSkipViewModelCreationWhenSizing;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
