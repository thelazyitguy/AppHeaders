//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <GitHubMarkdown/UITextViewDelegate-Protocol.h>

@interface _TtC14GitHubMarkdown8TextCell : UITableViewCell <UITextViewDelegate>
{
    // Error parsing type: , name: textView
    // Error parsing type: , name: borderStackView
    // Error parsing type: , name: borderStackViewWidthConstraint
    // Error parsing type: , name: textViewLeadingConstraint
    // Error parsing type: , name: textViewBottomConstraint
    // Error parsing type: , name: linkDelegate
    // Error parsing type: , name: quoteBorderColor
    // Error parsing type: , name: needsTailSpacing
    // Error parsing type: , name: tapGesture
}

- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)onTapWithRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
