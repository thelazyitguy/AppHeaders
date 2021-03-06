//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/FNBaseViewController.h>

@class CCDrawView, ComicsFrameView, NSMutableDictionary, UIButton, UIColor, UIImageView, UISlider;

@interface FNComicsAddDrawingViewController : FNBaseViewController
{
    NSMutableDictionary *comicsFrameInfo;
    ComicsFrameView *comicsFrameView;
    CCDrawView *drawView;
    UIImageView *imageSelectedEraseView;
    UIImageView *imageSelectedDrawView;
    UIImageView *imageSelectedColorView;
    UISlider *slider;
    UIColor *savedColor;
    float savedLineWidthDraw;
    float savedLineWidthErase;
    UIButton *undoButton;
    UIButton *redoButton;
    _Bool isRemoveEditItem;
}

+ (double)barItemWidth;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)setColorAlpha:(float)arg1;
- (void)sliderAction:(id)arg1;
- (void)onSelectColor:(id)arg1;
- (void)onSelectErase;
- (void)onSelectDraw;
- (void)undoRedoChanged;
- (void)onRedo;
- (void)onUndo;
- (void)onCancel;
- (void)onDone;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithComicsFrameInfo:(id)arg1;

@end

