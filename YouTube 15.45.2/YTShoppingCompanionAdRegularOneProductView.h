//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTShoppingCompanionAdProductView-Protocol.h>

@class NSArray, NSString, YTFormattedStringLabel;

@interface YTShoppingCompanionAdRegularOneProductView : UIView <YTShoppingCompanionAdProductView>
{
    YTFormattedStringLabel *_descriptionLabel;
    YTFormattedStringLabel *_priceLabel;
    NSArray *_thumbnails;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *thumbnails; // @synthesize thumbnails=_thumbnails;
- (void)prepareForReuse;
- (void)setProductListArray:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

