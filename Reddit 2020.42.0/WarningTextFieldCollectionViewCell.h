//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TextFieldCollectionViewCell.h"

@class WarningLabel;

@interface WarningTextFieldCollectionViewCell : TextFieldCollectionViewCell
{
    WarningLabel *_warningLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WarningLabel *warningLabel; // @synthesize warningLabel=_warningLabel;
- (void)updateWarningLabelSize;
- (void)textFieldDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

