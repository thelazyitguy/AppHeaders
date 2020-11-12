//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@protocol FNTagTextViewDelegate;

@interface FNTagTextView : UITextView
{
    id <FNTagTextViewDelegate> _tagsDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FNTagTextViewDelegate> tagsDelegate; // @synthesize tagsDelegate=_tagsDelegate;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;

@end
