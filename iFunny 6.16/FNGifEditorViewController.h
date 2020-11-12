//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/FNBaseViewController.h>

#import <Funny/UIPopoverControllerDelegate-Protocol.h>
#import <Funny/UITextViewDelegate-Protocol.h>

@class FNBlurView, FNTextButton, NSData, NSMutableArray, NSString, NSURL, OLImageView, UILabel, UIScrollView, UISlider, UITextView, UIView;

@interface FNGifEditorViewController : FNBaseViewController <UITextViewDelegate, UIPopoverControllerDelegate>
{
    NSData *sourceData;
    UIView *pictureView;
    UIScrollView *scroll;
    OLImageView *olImageView;
    UIView *clipImageView;
    NSData *resultData;
    UITextView *captionTextView;
    UIView *whiteCaptionView;
    UILabel *placeholderLabel;
    float scaleFactor;
    float fontScale;
    NSString *captionText;
    FNTextButton *doneButton;
    NSString *contentId;
    struct CGRect cropRect;
    NSMutableArray *normalFrameDurations;
    FNBlurView *bottomBarView;
    UISlider *speedSlider;
    NSURL *fileURL;
    struct CGSize gifSize;
    long long _dwhContentType;
}

- (void).cxx_destruct;
@property(nonatomic) long long dwhContentType; // @synthesize dwhContentType=_dwhContentType;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (double)calcFrameTextView:(id)arg1;
- (double)textViewHeightForAttributedText:(id)arg1 andWidth:(double)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)createCaptionForGif;
- (void)onDone;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)reverseGif;
- (void)speedChange;
- (void)viewDidUnload;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)createBottomBar;
- (void)viewDidLoad;
- (id)initWithContentId:(id)arg1 gifData:(id)arg2 cropRect:(struct CGRect)arg3 dwhContentType:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
