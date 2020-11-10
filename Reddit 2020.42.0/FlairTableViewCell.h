//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseTableViewCell.h>

@class BaseImageView, CheckboxButton, FlairLabel, NSObject, UIStackView;
@protocol FlairProtocol, ViewContext;

@interface FlairTableViewCell : BaseTableViewCell
{
    NSObject<FlairProtocol> *_flair;
    id <ViewContext> _viewContext;
    CheckboxButton *_radioButton;
    BaseImageView *_originalSelectionIcon;
    FlairLabel *_flairLabel;
    UIStackView *_mainHorizontalStackView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIStackView *mainHorizontalStackView; // @synthesize mainHorizontalStackView=_mainHorizontalStackView;
@property(retain, nonatomic) FlairLabel *flairLabel; // @synthesize flairLabel=_flairLabel;
@property(retain, nonatomic) BaseImageView *originalSelectionIcon; // @synthesize originalSelectionIcon=_originalSelectionIcon;
@property(retain, nonatomic) CheckboxButton *radioButton; // @synthesize radioButton=_radioButton;
@property(retain, nonatomic) id <ViewContext> viewContext; // @synthesize viewContext=_viewContext;
@property(retain, nonatomic) NSObject<FlairProtocol> *flair; // @synthesize flair=_flair;
- (void)updateWithData:(id)arg1 isSelected:(_Bool)arg2 isAssigned:(_Bool)arg3;
- (void)updateAccessibility;
- (void)prepareForReuse;
- (void)setupConstraints;
- (void)configureWithViewContext:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

