//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseServiceHandler.h"

@interface GenericRequestServiceManager : BaseServiceHandler
{
    id delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id delegate; // @synthesize delegate;
- (void)requestFail:(id)arg1 withFeatureName:(id)arg2;
- (void)requestFinished:(id)arg1 withFeatureName:(id)arg2;
- (void)fetchResponseForSpecifiedURL:(id)arg1 forFeature:(id)arg2;

@end
