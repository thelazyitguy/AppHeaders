//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AspenUIComponents/FullWidthBorderedCell.h>

@class UILabel;

@interface SetupHeaderTableViewCell : FullWidthBorderedCell
{
    UILabel *_headerLabel;
}

+ (id)cellWithText:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (double)headerCellHeight;
- (void)updateText:(id)arg1;
- (void)initUIStyles;
- (void)awakeFromNib;

@end
