//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/PDKModelObject.h>

@class NSString, NSURL, PDKUser;

@interface PDKBoard : PDKModelObject
{
    NSString *_name;
    NSURL *_url;
    NSString *_descriptionText;
    PDKUser *_creator;
    NSString *_privacy;
    unsigned long long _followers;
    unsigned long long _pins;
    unsigned long long _collaborators;
}

+ (id)allFields;
+ (id)boardFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long collaborators; // @synthesize collaborators=_collaborators;
@property(nonatomic) unsigned long long pins; // @synthesize pins=_pins;
@property(nonatomic) unsigned long long followers; // @synthesize followers=_followers;
@property(retain, nonatomic) NSString *privacy; // @synthesize privacy=_privacy;
@property(retain, nonatomic) PDKUser *creator; // @synthesize creator=_creator;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithDictionary:(id)arg1;

@end

