//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class QTMActivityIndicator, UIView;

@interface YTEditDynamicStickerCollectionViewCell : UICollectionViewCell
{
    QTMActivityIndicator *_loadingIndicator;
    UIView *_stickerContentView;
}

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)displayStickerView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

