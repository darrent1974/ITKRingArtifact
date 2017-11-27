/*=========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/
#ifndef itkWaveletFourierStripeArtifactImageFilter_hxx
#define itkWaveletFourierStripeArtifactImageFilter_hxx

#include "itkWaveletFourierStripeArtifactImageFilter.h"
#include "itkNormalVariateGenerator.h"

#include "itkImageScanlineIterator.h"
#include "itkProgressReporter.h"

namespace itk
{

template< typename TImage >
WaveletFourierStripeArtifactImageFilter< TImage >
::WaveletFourierStripeArtifactImageFilter()
{
}


template< typename TImage >
void
WaveletFourierStripeArtifactImageFilter< TImage >
::PrintSelf( std::ostream& os, Indent indent ) const
{
  Superclass::PrintSelf( os, indent );
}


template< typename TImage >
void
WaveletFourierStripeArtifactImageFilter< TImage >
::GenerateData()
{
  this->AllocateOutputs();

  typename ImageType::Pointer input = ImageType::New();
  input->Graft( const_cast< ImageType * >( this->GetInput() ));

  ImageType * output = this->GetOutput();

  //m_RescaleFilter->GraftOutput( this->GetOutput() );
  //m_RescaleFilter->Update();
  //this->GraftOutput( m_RescaleFilter->GetOutput() );
}

} // end namespace itk

#endif // itkWaveletFourierStripeArtifactImageFilter_hxx