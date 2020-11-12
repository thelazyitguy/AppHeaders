//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSMutableArray, UIScrollView;
@protocol AFMSubNavPopoverDelegate;

@interface AFMSubNavPopoverViewController : UIViewController
{
    NSArray *_content;
    id <AFMSubNavPopoverDelegate> _delegate;
    NSMutableArray *_uiElements;
    UIScrollView *_scrollView;
    struct CGSize _maxContentSize;
    struct CGSize _contentSize;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) NSMutableArray *uiElements; // @synthesize uiElements=_uiElements;
@property(nonatomic) __weak id <AFMSubNavPopoverDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *content; // @synthesize content=_content;
@property(nonatomic) struct CGSize maxContentSize; // @synthesize maxContentSize=_maxContentSize;
- (void).cxx_destruct;
- (void)linkSelected:(id)arg1;
- (void)updateContent;
- (struct CGSize)preferredContentSize;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end
