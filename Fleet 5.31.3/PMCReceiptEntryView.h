//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CustomKeyboard, NSObject, NSString, UIImage, UIImageView, UILabel, UITextField;
@protocol PMCReceiptEntryViewDelegate;

@interface PMCReceiptEntryView : UIView
{
    NSObject<PMCReceiptEntryViewDelegate> *_delegate;
    NSString *_currency;
    UILabel *_amountLabel;
    UITextField *_amountTextField;
    UIImageView *_receiptImageView;
    UIImageView *_receiptImageOverlayView;
    UILabel *_instructionsLabel;
    CustomKeyboard *_keyboard;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CustomKeyboard *keyboard; // @synthesize keyboard=_keyboard;
@property(retain, nonatomic) UILabel *instructionsLabel; // @synthesize instructionsLabel=_instructionsLabel;
@property(retain, nonatomic) UIImageView *receiptImageOverlayView; // @synthesize receiptImageOverlayView=_receiptImageOverlayView;
@property(retain, nonatomic) UIImageView *receiptImageView; // @synthesize receiptImageView=_receiptImageView;
@property(retain, nonatomic) UITextField *amountTextField; // @synthesize amountTextField=_amountTextField;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(nonatomic) __weak NSObject<PMCReceiptEntryViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)amountStringWithAmount:(id)arg1;
- (id)decimalAmountWithRawStringAmount:(id)arg1;
- (id)rawStringAmountWithDecimalAmount:(id)arg1;
- (void)imageTapped:(id)arg1;
- (void)textFieldTextChanged:(id)arg1;
- (void)refreshSubviews;
- (void)setInstructions:(id)arg1;
- (void)setAmount:(id)arg1;
@property(retain, nonatomic) UIImage *receiptImage;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
