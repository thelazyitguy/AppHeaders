//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CALayer, CAShapeLayer, NFLXOperation, NFUILabel, NSString, UIBezierPath, UIColor, UIFont;

@interface NFUIDownloadButton : UIControl
{
    _Bool _showTitle;
    _Bool _downloadAvailable;
    _Bool _intrinsicSizeChanged;
    unsigned long long _downloadState;
    double _downloadProgress;
    UIColor *_titleColor;
    UIFont *_titleFont;
    unsigned long long _titlePosition;
    UIColor *_highlightColor;
    UIColor *_defaultColor;
    NSString *_accessibilityDecoratorString;
    NSString *_title;
    CAShapeLayer *_borderCircleShapeLayer;
    UIBezierPath *_borderCirclePath;
    UIBezierPath *_borderCircleSlashPath;
    CAShapeLayer *_borderProgressCircleShapeLayer;
    UIBezierPath *_borderProgressCirclePath;
    CAShapeLayer *_contentsShapeLayer;
    UIBezierPath *_downloadArrowPath;
    UIBezierPath *_pausedArrowPath;
    UIBezierPath *_stopSquarePath;
    UIBezierPath *_exclamationMarkPath;
    CALayer *_deviceOutlineLayer;
    UIBezierPath *_checkMarkPath;
    NFUILabel *_titleLabel;
    double _diameter;
    unsigned long long _renderedBorderCircleState;
    unsigned long long _renderedContentsState;
    NFLXOperation *_animationOperation;
    struct CGSize _iconSize;
    struct CGSize _iconSizeActual;
    struct UIEdgeInsets _titleEdgeInsets;
    struct UIEdgeInsets _minimumEdgeInsets;
    struct CGRect _shapeLayerFrame;
    struct CGRect _titleLabelFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NFLXOperation *animationOperation; // @synthesize animationOperation=_animationOperation;
@property(nonatomic) unsigned long long renderedContentsState; // @synthesize renderedContentsState=_renderedContentsState;
@property(nonatomic) unsigned long long renderedBorderCircleState; // @synthesize renderedBorderCircleState=_renderedBorderCircleState;
@property(nonatomic) _Bool intrinsicSizeChanged; // @synthesize intrinsicSizeChanged=_intrinsicSizeChanged;
@property(nonatomic) struct CGRect titleLabelFrame; // @synthesize titleLabelFrame=_titleLabelFrame;
@property(nonatomic) struct CGRect shapeLayerFrame; // @synthesize shapeLayerFrame=_shapeLayerFrame;
@property(nonatomic) double diameter; // @synthesize diameter=_diameter;
@property(nonatomic) struct CGSize iconSizeActual; // @synthesize iconSizeActual=_iconSizeActual;
@property(retain, nonatomic) NFUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIBezierPath *checkMarkPath; // @synthesize checkMarkPath=_checkMarkPath;
@property(retain, nonatomic) CALayer *deviceOutlineLayer; // @synthesize deviceOutlineLayer=_deviceOutlineLayer;
@property(retain, nonatomic) UIBezierPath *exclamationMarkPath; // @synthesize exclamationMarkPath=_exclamationMarkPath;
@property(retain, nonatomic) UIBezierPath *stopSquarePath; // @synthesize stopSquarePath=_stopSquarePath;
@property(retain, nonatomic) UIBezierPath *pausedArrowPath; // @synthesize pausedArrowPath=_pausedArrowPath;
@property(retain, nonatomic) UIBezierPath *downloadArrowPath; // @synthesize downloadArrowPath=_downloadArrowPath;
@property(retain, nonatomic) CAShapeLayer *contentsShapeLayer; // @synthesize contentsShapeLayer=_contentsShapeLayer;
@property(retain, nonatomic) UIBezierPath *borderProgressCirclePath; // @synthesize borderProgressCirclePath=_borderProgressCirclePath;
@property(retain, nonatomic) CAShapeLayer *borderProgressCircleShapeLayer; // @synthesize borderProgressCircleShapeLayer=_borderProgressCircleShapeLayer;
@property(retain, nonatomic) UIBezierPath *borderCircleSlashPath; // @synthesize borderCircleSlashPath=_borderCircleSlashPath;
@property(retain, nonatomic) UIBezierPath *borderCirclePath; // @synthesize borderCirclePath=_borderCirclePath;
@property(retain, nonatomic) CAShapeLayer *borderCircleShapeLayer; // @synthesize borderCircleShapeLayer=_borderCircleShapeLayer;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *accessibilityDecoratorString; // @synthesize accessibilityDecoratorString=_accessibilityDecoratorString;
@property(retain, nonatomic) UIColor *defaultColor; // @synthesize defaultColor=_defaultColor;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic, getter=isDownloadAvailable) _Bool downloadAvailable; // @synthesize downloadAvailable=_downloadAvailable;
@property(nonatomic) unsigned long long titlePosition; // @synthesize titlePosition=_titlePosition;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) struct UIEdgeInsets minimumEdgeInsets; // @synthesize minimumEdgeInsets=_minimumEdgeInsets;
@property(nonatomic) struct UIEdgeInsets titleEdgeInsets; // @synthesize titleEdgeInsets=_titleEdgeInsets;
@property(nonatomic) _Bool showTitle; // @synthesize showTitle=_showTitle;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) double downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) unsigned long long downloadState; // @synthesize downloadState=_downloadState;
- (void)renderExclamationMark;
- (void)animateContentsFromStartedToCompleted;
- (void)renderDeviceCheckMark;
- (void)renderStopSquare;
- (void)renderPausedArrow;
- (void)renderDownloadArrow;
- (void)renderIconContents;
- (void)renderBorderCircleWithProgress:(double)arg1;
- (void)animateBorderCircleFromQueuedToTargetState:(unsigned long long)arg1;
- (void)animateBorderCircleFromUnknownToLoading;
- (void)renderBorderCircle;
- (void)invalidatePaths;
- (void)updateTitleLabel;
- (void)updateMetrics;
- (struct CGSize)maxTitleSize;
- (void)updateTitleForState;
- (void)configureAccessibility;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)_updateDownloadIcon;
- (void)commonInit;
- (void)updateForDownloadProgress:(double)arg1;
- (void)updateForDownloadState:(unsigned long long)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
