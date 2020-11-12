//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/MPVASTModel.h>

@class MPVASTResponse, NSArray, NSURL;

@interface MPVASTWrapper : MPVASTModel
{
    NSArray *_creatives;
    NSArray *_errorURLs;
    NSArray *_extensions;
    NSArray *_impressionURLs;
    NSURL *_VASTAdTagURI;
    MPVASTResponse *_wrappedVASTResponse;
}

+ (id)modelMap;
- (void).cxx_destruct;
@property(retain, nonatomic) MPVASTResponse *wrappedVASTResponse; // @synthesize wrappedVASTResponse=_wrappedVASTResponse;
@property(readonly, copy, nonatomic) NSURL *VASTAdTagURI; // @synthesize VASTAdTagURI=_VASTAdTagURI;
@property(readonly, nonatomic) NSArray *impressionURLs; // @synthesize impressionURLs=_impressionURLs;
@property(readonly, nonatomic) NSArray *extensions; // @synthesize extensions=_extensions;
@property(readonly, nonatomic) NSArray *errorURLs; // @synthesize errorURLs=_errorURLs;
@property(readonly, nonatomic) NSArray *creatives; // @synthesize creatives=_creatives;
- (id)initWithDictionary:(id)arg1;

@end
