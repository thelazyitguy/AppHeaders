//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

@interface MdxUiMenuListDefaultItemCell : UITableViewCell
{
    _Bool _disabled;
    _Bool _customSelected;
    UILabel *_titleLabel;
    UIView *_selectedRect;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *selectedRect; // @synthesize selectedRect=_selectedRect;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool customSelected; // @synthesize customSelected=_customSelected;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCustomSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setDisabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)applyHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)applyHighlighted:(_Bool)arg1;
- (void)applyDisabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)applyDisabled:(_Bool)arg1;
- (void)applyCustomSelectedState:(_Bool)arg1 animated:(_Bool)arg2;
- (void)applyCustomSelectedState:(_Bool)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)awakeFromNib;

@end
