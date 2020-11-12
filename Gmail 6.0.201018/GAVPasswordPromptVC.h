//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GAVPasswordPromptViewDelegate-Protocol.h"
#import "GAVRenderer-Protocol.h"

@class GAVPasswordPromptView, GAVProjectorConfiguration;
@protocol GAVFileInfo, GAVRendererDelegate;

@interface GAVPasswordPromptVC : UIViewController <GAVPasswordPromptViewDelegate, GAVRenderer>
{
    _Bool _chromeHidden;
    id <GAVRendererDelegate> _delegate;
    GAVProjectorConfiguration *_projectorConfiguration;
    id <GAVFileInfo> _fileInfo;
    GAVPasswordPromptView *_passwordPromptView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GAVPasswordPromptView *passwordPromptView; // @synthesize passwordPromptView=_passwordPromptView;
@property(nonatomic) _Bool chromeHidden; // @synthesize chromeHidden=_chromeHidden;
@property(copy, nonatomic) id <GAVFileInfo> fileInfo; // @synthesize fileInfo=_fileInfo;
@property(retain, nonatomic) GAVProjectorConfiguration *projectorConfiguration; // @synthesize projectorConfiguration=_projectorConfiguration;
@property(nonatomic) __weak id <GAVRendererDelegate> delegate; // @synthesize delegate=_delegate;
- (void)rendererDidReceiveError:(id)arg1;
- (void)rendererDidBecomeHidden;
- (void)rendererDidBecomeVisible;
- (_Bool)restoreToOriginalHeight:(double)arg1;
- (void)didShowBottomViewControllerWithHeight:(double)arg1 rendererHeight:(double)arg2;
- (_Bool)passwordPromptViewShouldBeginEditing:(id)arg1;
- (void)passwordPromptViewDidReceiveTap:(id)arg1;
- (void)passwordPromptViewSubmitButtonTapped:(id)arg1 withPasswordString:(id)arg2;
- (void)didReceiveTap;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)loadView;
- (id)initWithFileInfo:(id)arg1;

@end
