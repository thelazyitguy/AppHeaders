//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton, UILabel, _TtC8Chipotle14StoreHoursView;

@interface _TtC8Chipotle16StoreDetailsView : UIView
{
    // Error parsing type: , name: contentView
    // Error parsing type: , name: favoriteNameButton
    // Error parsing type: , name: distanceLabel
    // Error parsing type: , name: addressLabelTopConstraint
    // Error parsing type: , name: addressLineOneLabel
    // Error parsing type: , name: addressLineTwoLabel
    // Error parsing type: , name: phoneLabel
    // Error parsing type: , name: favoriteButton
    // Error parsing type: , name: storeHoursView
    // Error parsing type: , name: additionalInformationSeparatorView
    // Error parsing type: , name: additionalInformationPrimaryLabel
    // Error parsing type: , name: currentlyClosedLabel
    // Error parsing type: , name: chipotlaneLabel
    // Error parsing type: , name: additionalInfoSeparatorTopConstraint
    // Error parsing type: , name: restaurant
    // Error parsing type: , name: directionsAction
    // Error parsing type: , name: phoneAction
    // Error parsing type: , name: closeAction
    // Error parsing type: , name: favoriteAction
    // Error parsing type: , name: renameAction
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didPressRenameFavoriteButton:(id)arg1;
- (void)didPressFavoriteButton:(id)arg1;
- (void)didPressCloseButton:(id)arg1;
- (void)didPressPhoneButton:(id)arg1;
- (void)didPressAddressButton:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic) __weak NSLayoutConstraint *additionalInfoSeparatorTopConstraint; // @synthesize additionalInfoSeparatorTopConstraint;
@property(nonatomic) __weak UILabel *chipotlaneLabel; // @synthesize chipotlaneLabel;
@property(nonatomic) __weak UILabel *currentlyClosedLabel; // @synthesize currentlyClosedLabel;
@property(nonatomic) __weak UILabel *additionalInformationPrimaryLabel; // @synthesize additionalInformationPrimaryLabel;
@property(nonatomic) __weak UIView *additionalInformationSeparatorView; // @synthesize additionalInformationSeparatorView;
@property(nonatomic) __weak _TtC8Chipotle14StoreHoursView *storeHoursView; // @synthesize storeHoursView;
@property(nonatomic) __weak UIButton *favoriteButton; // @synthesize favoriteButton;
@property(nonatomic) __weak UILabel *phoneLabel; // @synthesize phoneLabel;
@property(nonatomic) __weak UILabel *addressLineTwoLabel; // @synthesize addressLineTwoLabel;
@property(nonatomic) __weak UILabel *addressLineOneLabel; // @synthesize addressLineOneLabel;
@property(nonatomic) __weak NSLayoutConstraint *addressLabelTopConstraint; // @synthesize addressLabelTopConstraint;
@property(nonatomic) __weak UILabel *distanceLabel; // @synthesize distanceLabel;
@property(nonatomic) __weak UIButton *favoriteNameButton; // @synthesize favoriteNameButton;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView;

@end
