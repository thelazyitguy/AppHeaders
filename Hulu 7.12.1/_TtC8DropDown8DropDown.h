//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIFont;

@interface _TtC8DropDown8DropDown : UIView
{
    // Error parsing type: , name: dismissableView
    // Error parsing type: , name: tableViewContainer
    // Error parsing type: , name: tableView
    // Error parsing type: , name: templateCell
    // Error parsing type: , name: $__lazy_storage_$_arrowIndication
    // Error parsing type: , name: anchorView
    // Error parsing type: , name: direction
    // Error parsing type: , name: topOffset
    // Error parsing type: , name: bottomOffset
    // Error parsing type: , name: offsetFromWindowBottom
    // Error parsing type: , name: width
    // Error parsing type: , name: arrowIndicationX
    // Error parsing type: , name: heightConstraint
    // Error parsing type: , name: widthConstraint
    // Error parsing type: , name: xConstraint
    // Error parsing type: , name: yConstraint
    // Error parsing type: , name: cellHeight
    // Error parsing type: , name: tableViewBackgroundColor
    // Error parsing type: , name: dimmedBackgroundColor
    // Error parsing type: , name: selectionBackgroundColor
    // Error parsing type: , name: separatorColor
    // Error parsing type: , name: cornerRadius
    // Error parsing type: , name: shadowColor
    // Error parsing type: , name: shadowOffset
    // Error parsing type: , name: shadowOpacity
    // Error parsing type: , name: shadowRadius
    // Error parsing type: , name: animationduration
    // Error parsing type: , name: animationEntranceOptions
    // Error parsing type: , name: animationExitOptions
    // Error parsing type: , name: downScaleTransform
    // Error parsing type: , name: textColor
    // Error parsing type: , name: selectedTextColor
    // Error parsing type: , name: textFont
    // Error parsing type: , name: cellNib
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: localizationKeysDataSource
    // Error parsing type: , name: selectedRowIndices
    // Error parsing type: , name: cellConfiguration
    // Error parsing type: , name: customCellConfiguration
    // Error parsing type: , name: selectionAction
    // Error parsing type: , name: multiSelectionAction
    // Error parsing type: , name: willShowAction
    // Error parsing type: , name: cancelAction
    // Error parsing type: , name: dismissMode
    // Error parsing type: , name: didSetupConstraints
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;
@property(nonatomic, retain) UIFont *textFont; // @synthesize textFont;
@property(nonatomic, retain) UIColor *selectedTextColor; // @synthesize selectedTextColor;
@property(nonatomic, retain) UIColor *textColor; // @synthesize textColor;
@property(nonatomic) double animationduration; // @synthesize animationduration;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius;
@property(nonatomic) float shadowOpacity; // @synthesize shadowOpacity;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset;
@property(nonatomic, retain) UIColor *shadowColor; // @synthesize shadowColor;
- (void)setupMaskedCorners:(unsigned long long)arg1;
- (void)setupCornerRadius:(double)arg1;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius;
@property(nonatomic, retain) UIColor *separatorColor; // @synthesize separatorColor;
@property(nonatomic, retain) UIColor *selectionBackgroundColor; // @synthesize selectionBackgroundColor;
@property(nonatomic, retain) UIColor *backgroundColor;
@property(nonatomic, retain) UIColor *tableViewBackgroundColor; // @synthesize tableViewBackgroundColor;
@property(nonatomic) double cellHeight; // @synthesize cellHeight;

@end
