//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TableViewModelCell.h"

@class LPCheckBox;

@interface CheckBoxTableViewCell : TableViewModelCell
{
    _Bool _initialValue;
    LPCheckBox *_checkBox;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool initialValue; // @synthesize initialValue=_initialValue;
@property(readonly, nonatomic) LPCheckBox *checkBox; // @synthesize checkBox=_checkBox;
- (void)store;
- (void)load;
- (void)loadLabel;
- (void)valueChanged:(id)arg1;
- (double)measureHeightForWidth:(double)arg1;
- (void)layoutForWidth:(double)arg1;
- (id)initWithReuseIdentififer:(id)arg1;

@end
