//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SDMultilineLabel, UIImageView, UILabel;

@interface _TtC8WishList28WMScanReceiptReviewItemsCell : UITableViewCell
{
    // Error parsing type: , name: itemNameLabel
    // Error parsing type: , name: itemPriceLabel
    // Error parsing type: , name: itemQuantityDisplayLabel
    // Error parsing type: , name: itemImageView
    // Error parsing type: , name: itemCheckView
    // Error parsing type: , name: delegate
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: checkedStatus
    // Error parsing type: , name: newHasQuantity
    // Error parsing type: , name: changeQuantityBlock
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)quantityTapped;
- (void)checkboxTapped;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) __weak UIImageView *itemCheckView; // @synthesize itemCheckView;
@property(nonatomic) __weak UIImageView *itemImageView; // @synthesize itemImageView;
@property(nonatomic) __weak UILabel *itemQuantityDisplayLabel; // @synthesize itemQuantityDisplayLabel;
@property(nonatomic) __weak SDMultilineLabel *itemPriceLabel; // @synthesize itemPriceLabel;
@property(nonatomic) __weak UILabel *itemNameLabel; // @synthesize itemNameLabel;

@end

