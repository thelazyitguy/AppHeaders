//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface MdxUiMenuStatusView : UIView
{
    UILabel *_statusTitleLabel;
    UILabel *_statusDescriptionLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *statusDescriptionLabel; // @synthesize statusDescriptionLabel=_statusDescriptionLabel;
@property(nonatomic) __weak UILabel *statusTitleLabel; // @synthesize statusTitleLabel=_statusTitleLabel;
- (void)configureWithViewModel:(id)arg1;
- (void)awakeFromNib;

@end

