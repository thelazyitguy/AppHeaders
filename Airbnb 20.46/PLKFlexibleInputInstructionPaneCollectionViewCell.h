//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel;

@interface PLKFlexibleInputInstructionPaneCollectionViewCell : UICollectionViewCell
{
    UILabel *_stepLabel;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *stepLabel; // @synthesize stepLabel=_stepLabel;
- (void)awakeFromNib;

@end

