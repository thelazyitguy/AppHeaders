//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, UIButton, UILabel;

@interface _TtC14DoordashDriver32ParkingDetailsCollectionViewCell : UICollectionViewCell
{
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: userInputLabel
    // Error parsing type: , name: editButton
    // Error parsing type: , name: supportButton
    // Error parsing type: , name: supportButtonWidthConstraint
    // Error parsing type: , name: didTapEdit
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)supportTapped;
- (void)editTappedWithSender:(id)arg1;
- (void)prepareForReuse;
@property(nonatomic, retain) NSLayoutConstraint *supportButtonWidthConstraint; // @synthesize supportButtonWidthConstraint;
@property(nonatomic) __weak UIButton *supportButton; // @synthesize supportButton;
@property(nonatomic) __weak UIButton *editButton; // @synthesize editButton;
@property(nonatomic) __weak UILabel *userInputLabel; // @synthesize userInputLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;

@end
