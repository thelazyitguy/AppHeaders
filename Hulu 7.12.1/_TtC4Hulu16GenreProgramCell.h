//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImageView, UIStackView, UIView, _TtC7HuluAPI11ProgressBar, _TtC7HuluAPI18HuluTextStyleLabel;

@interface _TtC4Hulu16GenreProgramCell : UICollectionViewCell
{
    // Error parsing type: , name: imageView
    // Error parsing type: , name: networkImageView
    // Error parsing type: , name: progressBar
    // Error parsing type: , name: eyebrowLabel
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: imageScrimView
    // Error parsing type: , name: onNowScrimView
    // Error parsing type: , name: badgeStackView
    // Error parsing type: , name: program
    // Error parsing type: , name: personalizedItem
    // Error parsing type: , name: personalizationBinding
    // Error parsing type: , name: detailDisposable
    // Error parsing type: , name: refreshUITimer
    // Error parsing type: , name: isWatchingThisProgram
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic) _Bool isAccessibilityElement;
@property(nonatomic, copy) NSString *accessibilityLabel;
- (void)prepareForReuse;
- (void)awakeFromNib;
@property(nonatomic, retain) UIStackView *badgeStackView; // @synthesize badgeStackView;
@property(nonatomic, retain) UIView *onNowScrimView; // @synthesize onNowScrimView;
@property(nonatomic, retain) UIView *imageScrimView; // @synthesize imageScrimView;
@property(nonatomic, retain) _TtC7HuluAPI18HuluTextStyleLabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic, retain) _TtC7HuluAPI18HuluTextStyleLabel *eyebrowLabel; // @synthesize eyebrowLabel;
@property(nonatomic, retain) _TtC7HuluAPI11ProgressBar *progressBar; // @synthesize progressBar;
@property(nonatomic, retain) UIImageView *networkImageView; // @synthesize networkImageView;
@property(nonatomic, retain) UIImageView *imageView; // @synthesize imageView;

@end

