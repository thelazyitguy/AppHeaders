//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class GBTAppBarViewController, UIImageView;
@protocol HUBColorScheme;

@interface BlankThreadViewController : UIViewController
{
    GBTAppBarViewController *_appBar;
    UIImageView *_imageView;
    id <HUBColorScheme> _colorScheme;
    _Bool _showingEmptyThreadList;
    unsigned long long _listNavigationType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long listNavigationType; // @synthesize listNavigationType=_listNavigationType;
@property(nonatomic) _Bool showingEmptyThreadList; // @synthesize showingEmptyThreadList=_showingEmptyThreadList;
- (void)updateImage;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end
