//
//  _JHAVAssetSampleDataProvider.h
//  JHWaveformView
//
//  Created by Jamie Hardt on 11/21/12.
//  Copyright (c) 2012 Jamie Hardt. All rights reserved.
//

#import "JHSampleDataProvider.h"

@interface _JHAVAssetSampleDataProvider : JHSampleDataProvider {
    AVAsset         *_asset;
    AVAssetTrack    *_track;
    CMTimeRange     _timeRange;
    BOOL            _loadedData;
    
}

-(id)initWithAsset:(AVAsset *)asset
             track:(AVAssetTrack *)track
         timeRange:(CMTimeRange)range;

@end
