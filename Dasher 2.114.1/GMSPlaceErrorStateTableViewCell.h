//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class GMSAutocompleteTableDataSource, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UITableView;

@interface GMSPlaceErrorStateTableViewCell : UITableViewCell
{
    UIImageView *_imageView;
    _Bool _showButton;
    UIButton *_tryAgainButton;
    UILabel *_messageLabel;
    UIActivityIndicatorView *_activityIndicator;
    UITableView *_containingTableView;
    GMSAutocompleteTableDataSource *_containingTableViewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GMSAutocompleteTableDataSource *containingTableViewDelegate; // @synthesize containingTableViewDelegate=_containingTableViewDelegate;
@property(nonatomic) __weak UITableView *containingTableView; // @synthesize containingTableView=_containingTableView;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) _Bool showButton; // @synthesize showButton=_showButton;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIButton *tryAgainButton; // @synthesize tryAgainButton=_tryAgainButton;
- (void)layoutSubviews;
- (void)updateImageToBestContrast;
- (id)initWithReuseIdentifier:(id)arg1;

@end
