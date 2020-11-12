//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MeasureableTableViewCell-Protocol.h"

@class UIImageView, UILabel;

@interface PhotoTableViewCell : UITableViewCell <MeasureableTableViewCell>
{
    UIImageView *_photoImageView;
    UILabel *_photoNameLabel;
    UILabel *_photoSizeLabel;
}

@property(nonatomic) UILabel *photoSizeLabel; // @synthesize photoSizeLabel=_photoSizeLabel;
@property(nonatomic) UILabel *photoNameLabel; // @synthesize photoNameLabel=_photoNameLabel;
@property(nonatomic) UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
- (void)layoutSubviews;
- (double)measureHeightForTableView:(id)arg1;
- (double)measureHeightForWidth:(double)arg1;

@end
