//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, UIImage;

@interface A9VSScanItWidgetInfo : NSObject
{
    UIImage *_icon;
    NSDictionary *_titleDictionary;
    NSDictionary *_extraProps;
    unsigned long long _destinationType;
}

@property(nonatomic) unsigned long long destinationType; // @synthesize destinationType=_destinationType;
@property(retain, nonatomic) NSDictionary *extraProps; // @synthesize extraProps=_extraProps;
@property(retain, nonatomic) NSDictionary *titleDictionary; // @synthesize titleDictionary=_titleDictionary;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (unsigned long long)typeForDestionation:(id)arg1;
- (id)initWithItem:(id)arg1;

@end
