//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;
@protocol NFUIDisplayPagePlayButtonViewDelegateProtocol;

@interface _TtC4Argo30DisplayPagePlaybackButtonsView : UIView
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: isOriginalTitle
    // Error parsing type: , name: buttonState
    // Error parsing type: , name: titleName
    // Error parsing type: , name: playButton
    // Error parsing type: , name: edgeSpacing
}

- (void).cxx_destruct;
- (void)didTapTrailer;
- (void)didTapPlay;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, copy) NSString *titleName;
@property(nonatomic) long long buttonState; // @synthesize buttonState;
@property(nonatomic) _Bool isOriginalTitle; // @synthesize isOriginalTitle;
@property(nonatomic) __weak id <NFUIDisplayPagePlayButtonViewDelegateProtocol> delegate; // @synthesize delegate;

@end

