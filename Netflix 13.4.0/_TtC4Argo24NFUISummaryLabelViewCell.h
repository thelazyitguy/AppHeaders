//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIFamiliarityViewCell.h"

@protocol NFUIReusableViewModelProtocol;

@interface _TtC4Argo24NFUISummaryLabelViewCell : NFUIFamiliarityViewCell
{
    // Error parsing type: , name: label
    // Error parsing type: , name: internalViewModel
}

+ (id)viewModelForEntityId:(id)arg1;
+ (_Bool)shouldReturnClassForType:(id)arg1 withModel:(id)arg2;
+ (void)registerSelf;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)calculatedSize:(struct CGSize)arg1 withModel:(id)arg2 withCollectionView:(id)arg3;
- (void)doLayout:(struct CGSize)arg1 withCollectionView:(id)arg2;
@property(nonatomic, retain) id <NFUIReusableViewModelProtocol> viewModel;
- (void)commonInit;

@end

